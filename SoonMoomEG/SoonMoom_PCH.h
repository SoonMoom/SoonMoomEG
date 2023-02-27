#pragma once
#include<iostream>
#include<sstream>
#include<fstream>

#include<vector>
#include<list>
#include<queue>
#include<deque>
#include<concurrent_priority_queue.h>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<forward_list>

#include<thread>
#include<mutex>
#include<atomic>

#ifdef SOONMOOM_PLATFORM_WINDOWS
#include <Windows.h>


#else
#error SoonMoom Just only support Windows!
#endif // SOONMOOM_PLATFORM_WINDOWS

