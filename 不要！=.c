	if (c != '\r')
				{
					buf[i++] = c;

				} else
				{
					//这里要判断是\n
					j = recv(st, &c, 1, MSG_PEEK);
					if ((c == '\n'))
						j = recv(st, &c, 1, 0);
					else
					{
						j = recv(st, &c, 1, 0);
						buf[i++] = c;
					}

				}

/尽量先写等于
	if (c == '\r')
			{
				j = recv(st, &c, 1, MSG_PEEK);
				if ((c == '\n'))
					j = recv(st, &c, 1, 0);
				else
				{
					//收到换行后，就结束！！！！！
					j = recv(st, &c, 1, 0);
					buf[i++] = c;
				}
			} else
			{
				buf[i++] = c;
			}


=============================================================================
同一设备，定义结构体，相当于C++中类，不要定义过多变量