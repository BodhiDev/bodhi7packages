/* EINA - EFL data type library
 * Copyright (C) 2002-2008 Gustavo Sverzut Barbieri
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library;
 * if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef EINA_STR_INLINE_H_
#define EINA_STR_INLINE_H_

#include <string.h>

/**
 * @addtogroup Eina_String_Group String
 *
 * @{
 */

/**
 * @brief Count up to a given amount of bytes of the given string.
 *
 * @param str The string pointer.
 * @param maxlen The maximum length to allow.
 * @return the string size or (size_t)-1 if greater than @a maxlen.
 *
 * This function returns the size of @p str, up to @p maxlen
 * characters. It avoid needless iterations after that size. @p str
 * must be a valid pointer and MUST not be @c NULL, otherwise this
 * function will crash. This function returns the string size, or
 * (size_t)-1 if the size is greater than @a maxlen.
 */
static inline size_t
eina_strlen_bounded(const char *str, size_t maxlen)
{
   const char *itr, *str_maxend = str + maxlen;
   for (itr = str; *itr != '\0'; itr++)
     if (itr == str_maxend) return (size_t)-1;
   return itr - str;
}

/**
 * @brief Join two strings of known length.
 *
 * @param dst The buffer to store the result.
 * @param size Size (in byte) of the buffer.
 * @param sep The separator character to use.
 * @param a First string to use, before @p sep.
 * @param b Second string to use, after @p sep.
 * @return The number of characters printed.
 *
 * This function is similar to eina_str_join_len(), but will compute
 * the length of @p a  and @p b using strlen().
 *
 * @see eina_str_join_len()
 * @see eina_str_join_static()
 */
static inline size_t
eina_str_join(char *dst, size_t size, char sep, const char *a, const char *b)
{
   return eina_str_join_len(dst, size, sep, a, strlen(a), b, strlen(b));
}

/**
 * @brief strdup function which takes @c NULL without crashing
 * @param str The string to copy
 * @return the copied string, must be freed
 * @since 1.12
 */
static inline char *
eina_strdup(const char *str)
{
   return str ? strdup(str) : NULL;
}

/**
 * @brief strndup function which takes @c NULL without crashing
 * @param str The string to copy
 * @param n The maximum number of char to copy
 * @return the copied string, must be freed
 * @note this also implements strndup() on Windows
 * @since 1.23
 */
static inline char *
eina_strndup(const char *str, size_t n)
{
   char *ret;
   const char *p;
   size_t slen = 0;

   if (!str)
     return NULL;
   for (p = str; *p; p++)
     {
        slen = (size_t)(p - str) + 1;
        if (slen > n)
          {
             slen = n;
             break;
          }
     }
   ret = (char *)malloc(slen + 1); /* cast for C++ code */
   if (!ret)
     return NULL;
   if (slen > 0)
     memcpy(ret, str, slen);
   ret[slen] = '\0';

   return ret;
}

/**
 * @brief streq function which takes @c NULL without crashing
 * @param a string a
 * @param b string b
 * @return true if strings are equal
 * @since 1.12
 */
static inline Eina_Bool
eina_streq(const char *a, const char *b)
{
   if (a == b) return EINA_TRUE;
   if ((!a) || (!b)) return EINA_FALSE;
   return !strcmp(a, b);
}

/**
 * @}
 */

#endif /* EINA_STR_INLINE_H_ */
