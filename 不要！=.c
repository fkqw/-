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


==============================================================================

		while(numbers>0)
		{
			numbers=get_line(fd, buf, sizeof(buf));
			if(strcasecmp(method,"Content-Length")==0)
			{
				length=buf[16];
			}
		}

		改成
		
		while(numbers>0)
		{
			numbers=get_line(fd, buf, sizeof(buf));
			if(strcasecmp(method,"Content-Length")==0)
			{
				length=buf[16];
			}
		}

==============================================		==============================================		==============================================
		#ifdef DEBUG
	printf("=======================\n");
#		endif
	   int st = socket(AF_INET, SOCK_STREAM, 0);
	   if(st<0)
	   {
		   perror(" socket  failed\n");
		   return -1;
	   }
	   struct sockaddr_in addr;
	   memset(&addr,0,sizeof(addr));
	   addr.sin_family=AF_INET;
	   addr.sin_port=htons(clientPort);
	   addr.sin_addr_s_addr=inet_addr(host);
	   if(connect(st,(struct sockaddr *)&addr,sizeof(addr))==-1)
		{
			  perror(" connect  failed\n");
					   return -1;
		}

	   return st;

	  
