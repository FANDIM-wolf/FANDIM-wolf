
import vk_api
from vk_api.bot_longpoll import VkBotLongPoll, VkBotEventType
from models import User
from config  import*

def get_user_by_id(user_id):
    try:
        return User().get(vk_id=user_id)
    except:
        User(
            vk_id=user_id,
            warns=0
        ).save()
    return User().get(vk_id=user_id)

class MyLongPoll(VkBotLongPoll):
    def listen(self):
        while True:
            try:
                for event in self.check():
                    yield event
            except Exception as e:
                print(e)
class VkBot:
    def __init__(self):
        self.vk_session = vk_api.VkApi(token=token)
        self.longpoll = MyLongPoll(self.vk_session , 202129996)
    def run(self):
        for event in self.longpoll.listen():
            if event.type == VkBotEventType.MESSAGE_NEW:
                msg = event.object.message
                user_id = msg['from_id']
                user = get_user_by_id(user_id)
                text = msg['text']
                fwd = self.vk_session.method('messages.getByConversationMessageId',{
                    'conversation_message_ids':msg['conversation_message_id'],
                    'peer_id':msg['peer_id']
                })['items'][0]
                if 'reply_message' in fwd:
                    fwd = fwd['reply_message']
                else:
                    fwd = None
                if user.vk_id == admin_id:
                    if text == 'БАН!':
                        self.vk_session.method('messages.removeChatUser' , {
                            'user_id': fwd['from_id'],
                            'chat_id': msg['peer_id']-2000000000
                        })
                    elif text == 'ПРЕДУПРЕЖДЕНИЕ':
                        fwd_user = get_user_by_id(fwd['from_id'])
                        fwd_user.warns += 1
                        fwd_user.save()
                        user_name = self.vk_session.method('users.get',{'user_id':fwd_user.vk_id})[0]['first_name']
                        self.vk_session.method('messages.send' , {
                            'chat_id' : msg['peer_id']-2000000000,
                            'message': f'{user_name} , вам выдано предупреждение!\n Всего предупреждений: {fwd_user.warns}/5 ',
                            'random_id':0
                        })
                        if fwd_user.warns >= 5:
                            self.vk_session.method('messages.removeChatUser' , {
                                'user_id' : fwd_user.vk_id,
                                'chat_id' : msg['peer_id']-2000000000
                            })
                

if __name__ == '__main__':
    VkBot().run()