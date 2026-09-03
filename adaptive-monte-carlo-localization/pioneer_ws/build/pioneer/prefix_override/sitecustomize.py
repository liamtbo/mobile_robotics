import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/liam-bouffard/Desktop/rob599_mobile_robotics/Homework_4/pioneer_ws/install/pioneer'
