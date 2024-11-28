balance = 1000

def buy (item,tk):
    balance = balance - tk
    print(balance)
buy('pen',10)
print(balance)

'''
কোডটি একটি UnboundLocalError তৈরি করবে, কারণ ফাংশনের ভেতরে আপনি global ভেরিয়েবল balance-এ সরাসরি পরিবর্তন করার চেষ্টা করছেন, কিন্তু ফাংশনের মধ্যে `balance``কে স্থানীয় (local) ভেরিয়েবল হিসেবে ধরে নেওয়া হচ্ছে।
--> সমস্যার কারণ:
ফাংশনের ভেতরে balance = balance - tk লাইনে, Python ফাংশনের ভেতরে থাকা balance-কে local ভেরিয়েবল হিসেবে ধরে নিচ্ছে। কিন্তু এর আগে balance স্থানীয় ভেরিয়েবল হিসেবে ডিফাইন করা হয়নি। একইসঙ্গে, আপনি গ্লোবাল balance পরিবর্তন করার চেষ্টা করেছেন, যা অনুমোদিত নয় (global ভেরিয়েবল সরাসরি ফাংশনের ভেতরে পরিবর্তন করতে হলে global কীওয়ার্ড ব্যবহার করতে হয়)।
'''
balance = 1000

def buy(item, tk):
    global balance  # গ্লোবাল ভেরিয়েবল উল্লেখ করুন['global' key word]
    balance = balance - tk
    print(f"Updated balance: {balance}")

buy('pen', 10)
print(f"Final balance: {balance}")
