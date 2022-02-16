from email import message
import telebot;
from telebot import types
import psycopg2
from psycopg2 import Error, connect
from psycopg2.extensions import ISOLATION_LEVEL_AUTOCOMMIT
import sqlite3 
import datetime
import random
import threading
from threading import *
import schedule
import logging
import time 

bot = telebot.TeleBot('5242526303:AAFrPqEj_FWcNkW8cFZUvm-E2e_haNxXTGg')

report = "now"

def send_report():
    global report
    bot.send_message(716740785 , report)
    print("sent to user")


while True:
    schedule.every(5).seconds.do(send_report)
    time.sleep(1)