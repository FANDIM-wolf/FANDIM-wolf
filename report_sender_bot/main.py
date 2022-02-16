from email import message
import telebot;
from telebot import types
from telegram import *
from telegram.ext import *
import datetime
import random
import threading
from threading import *
import schedule
import logging
import time 
token = '5285020731:AAGw8sR-sWOv5L08pSCzbZ33l3gPsEZyjVA'
bot = telebot.TeleBot(token)
updater = Updater(token , use_context = True)
#data about cake



list_of_id=[]
list_of_key_words = []
list_of_cakes = []
#check data of subject
subject_call_back_data = []

users =  [0,0,0,0,0,0,0,0,0]    



report = "Отчёт о выполненой работе : скрипт работает!"

@bot.message_handler(content_types=["text"])
def start(message):
    now = datetime.datetime.now()
    print("start function is activated at :" , now)
    if (now.hour >= 9) and (now.hour <= 18) :
            keyboard = types.InlineKeyboardMarkup() 
            key_teneleven = types.InlineKeyboardButton(text='Teneleven' , callback_data='get_teneleven')
            keyboard.add(key_teneleven)
            key_joe_lo = types.InlineKeyboardButton(text='Joe lo' , callback_data='get_joe_lo')
            keyboard.add(key_joe_lo)
            bot.send_message(message.from_user.id , text="Здравствуйте, благодарим за обращение. Мы намерены как можно скорее разобраться в вашем вопросе. Для этого, пожалуйста, предоставьте несколько уточнений:")
            bot.send_message(message.from_user.id , text="Товар какого бренда?" , reply_markup=keyboard)

    

#find cake in list in send to  user 
def choice(message):
    bot.send_message(message.from_user.id,"Записанно")
    name = message.text
    
    



bot.polling(none_stop=True , interval=0)


#updater.start_polling()
#dispatcher = updater.dispatcher
# говорим обработчику, если увидишь команду `/start`,
# то вызови функцию `start()`
#start_handler = CommandHandler('start', start)
# добавляем этот обработчик в `dispatcher`
#dispatcher.add_handler(start_handler)



#updater.stop()
     



