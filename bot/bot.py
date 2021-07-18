import vk_api
from vk_api.bot_longpoll import VkBotEventType, VkBotLongPoll
import datetime


now = datetime.datetime.now()
bot_age = now.year - 2021
tok="664829dd2a3c10fa21cd9e1f572cfc82bb9bc10b7793fccc286e4ac7a6613861a11eea66081cd3282bfe2"

vk_session = vk_api.VkApi(token ="664829dd2a3c10fa21cd9e1f572cfc82bb9bc10b7793fccc286e4ac7a6613861a11eea66081cd3282bfe2" )
longpoll = VkBotLongPoll(vk_session, 205925214)

def sender(id,text):
	vk_session.method('messages.send',{'chat_id':id,'message':text,'random_id':0})

for event in longpoll.listen():
	if event.type == VkBotEventType.MESSAGE_NEW:

		

		if event.from_chat:
			id = event.chat_id
			msg = event.obj.message['text'].lower()
			bot_age = now.year - 2021
			try:
				dey = event.message.action['type']
				invite_id  = event.message.action['member_id']
			except:
				dey  = ''
				invite_id = -100	
			if dey == "chat_invite_user":
				sender(id,f'Hi , @{invite_id} , read rules of chat or ask admin about it.')


			if msg == "hello" :
				sender(id,"hello")
			if msg == "how many years do you exist":
				text = str(bot_age)
				sender(id,text)
		