/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:01:37 by hloutman          #+#    #+#             */
/*   Updated: 2025/12/16 18:01:38 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
 
char *get_next_line(int fd)
{
   static int index;
   int bytes = 0;
   fd = open("out.txt", O_RDONLY);
   char* buff = malloc(sizeof(char)*(BUFFER_SIZE + 1));
   char* buff2 = malloc(sizeof(char)*(BUFFER_SIZE + 1));

   if (!buff || !buff2)
   {
      free(buff);
      free(buff2);
      buff = NULL;
      buff2 = NULL;
      return(NULL);
   }
   buff[BUFFER_SIZE] = '\0';
   buff2[BUFFER_SIZE] = '\0';
   bytes = read(fd, buff, BUFFER_SIZE);
   int i = index;
   while (buff[i] && buff[i] != '\n'){
      write(1,&buff[i],1);
      buff2[i+1] = buff[i];
      i++;
   }
   index = i;
   buff2[i] = '\n';
   return (buff2);
   free(buff);
   free(buff2);
}

int main(){
   int fd = open("out.txt", O_RDONLY);
   printf("%s",get_next_line(fd)); 
   // get_next_line(fd);
}
