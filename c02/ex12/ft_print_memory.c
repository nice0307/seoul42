/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:46:19 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/02 18:40:57 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int		ex_nreturnsize;
int		getbuffsize(unsigned int size);
char	*getaddress(char &add);
//char	*gethex(char data1, char data2);
//char	*getstring(int nstart, int ncnt, char *str);
//void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	addr[34] = "Bonjour les aminches????";
	void	*result;

	result = ft_print_memory(addr, 34);
	printf("%s", da);
	//write(1, result, sizeof(result));
	return (0);
}

void	*ft_print_memory(char *addr, unsigned int size)
{
	int		icnt = 0;
	int		nstartpoint = 0;
	int		nreturncnt = 0;
	int		i;
	int		j;
	char	*cpydata = *addr;
	char	*linedata;

	ex_nreturnsize = getbuffsize(size);

	char	returndata[10000];   //동적으로 만들 필요있음
	
	i = 0; 
	while (i < size) //for (int i = 0; i < size; i += 2)
	{
		if (icnt == 0)
		{
			nstartpoint = i;
			linedata = getaddress(cpydata[i]);
			j = 0;
			while (j < 18) //for (int j = 0; j < 18; j++)
			{
				returndata[nreturncnt] = linedata[j];
				nreturncnt++;
			}
		}
		LineData = gethex(cpydata[i], cpydata[i + 1]);    //헥사데이터 입력
		for (int j = 0; j < 5; j++)
		{
			returnData[nReturnCnt] = LineData[j];
			nReturnCnt++;
			j++;
		}
		icnt += 2;
		//if (icnt > 15)
		//{
		//	LineData =GetString(nStartPoint,16, CpyData);    //캐릭터 값 입력
		//	for (int j = 0; j < 17; j++)
		//	{
		//		returnData[nReturnCnt] = LineData[j];
		//		nReturnCnt++;
		//	}
		//	icnt = 0;
		//}
		//if (icnt != 0)
		//{
		//	int nEndSize = size-nStartPoint;
		//	LineData = GetString(nStartPoint, nEndSize, CpyData);
		//	for (int j = 0; j < nEndSize+1; j++)
		//	{
		//		returnData[nReturnCnt] = LineData[j];
		//		nReturnCnt++;
		//	}
		//}	
		i += 2;
	}
	addr = returnData;
	return (addr);
}

int	getbuffsize(unsigned int size)
{
	int nval = size / 16;
	int nquotient = size % 16;
	int	nreturnval = (nval * 75) + (18 + (5 * (nquotient / 2)) + nquotient + 1);

	return nreturnval;
}

char* getaddress(char& add)
{
	//CStringa a;
	//a.Format("%016x: ", &add);

	char data[18];
	memcpy(data, a, 18);

	return data;
}
char* GetHex(char Data1, char Data2)
{
	CStringA a;
	a.Format("%02x%02x ", Data1, Data2);

	char data[5];
	memcpy(data, a, 5);

	return data;
}
char* GetString(int nStart, int nCnt, char* str)
{
	CStringA a;

	char data[18];

	int iCnt = 0;
	for (int j = nStart; j < nStart + nCnt; j++)
	{
		if (str[j] >= 0x20)
		{
			data[iCnt] = str[j];
		}
		else
		{
			data[iCnt] = '.';
		}
		iCnt++;
	}

	data[iCnt] = '\n';

	return data;
}
