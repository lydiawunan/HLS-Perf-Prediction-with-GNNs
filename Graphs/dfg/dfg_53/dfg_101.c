#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 716042492
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, float p_7, float p_9[2])
{
  unsigned char v_4;
  short v;
  char result;
  v = (short)-13381;
  result = (char)22;
  v_4 = (unsigned char)((109 % ((int)((unsigned char)((float)result + - p_9[1])) + 871)) % 942);
  v_4 = (unsigned char)((long long)(((unsigned long)(- v_4) % 810621233UL) * (
                                    ((unsigned long)p_7 + 4294920234UL) + 4294967094UL)) - 
                        (long long)((long)p % (((long)p - -654L) + 858L)) * ~ (
                        -143147042LL / (long long)((int)p + 359)));
  result = (char)((unsigned long long)(((int)result * (int)v) / ((int)(~ v_4) + 597) - (int)p) + 18446744073709550360ULL);
  return result;
}


