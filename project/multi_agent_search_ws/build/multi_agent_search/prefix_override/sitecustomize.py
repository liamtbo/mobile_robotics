import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/liam-bouffard/Desktop/rob599_mobile_robotics/project/multi_agent_search_ws/install/multi_agent_search'
