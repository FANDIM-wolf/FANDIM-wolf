import vk_api
from vk_api.bot_longpoll import VkBotEventType, VkBotLongPoll
import datetime
import time
import os
from choice import robot


now = datetime.datetime.now()
bot_age = now.year - 2021

vk_session = vk_api.VkApi(token ="token" )
longpoll = VkBotLongPoll(vk_session, id_ssession)

def sender(id,text):
	vk_session.method('messages.send',{'chat_id':id,'message':text,'random_id':0})

#def send_msg(peer_id: int, message: str, attachment: str = ""):
#    return vk_.method("messages.send", {**locals(), "random_id": 0})

def job():
    print("I'm working...")

#create object of vk bot
vk_bot = robot("Helga")



while True:
	
	

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
				if msg == "random song":
					text = vk_bot.random_song()
					sender(id,text)	

				
					
			
				
				