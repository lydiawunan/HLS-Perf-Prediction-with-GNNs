#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205339063
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, float p_7, signed char p_9[5],
         signed char p_11[3][4], float p_13)
{
  short v_19;
  unsigned long long v_17;
  signed char v_15;
  long v_5;
  signed char v;
  char result;
  v_15 = (signed char)41;
  v_5 = 551299395L;
  v_19 = (short)(((unsigned long long)(! p_11[0][3]) - 18446744073196861641ULL) % (
                 ((unsigned long long)(p_7 * (float)(29 % ((int)p_9[3] + 191))) + 7255ULL) + 948ULL));
  v_17 = (unsigned long long)(~ (((int)p ^ (int)v_19) + 38) - (int)p_11[0][2]);
  v = (signed char)((unsigned long long)(((double)((long long)p / -437976104LL) / 499.953760123) / (
                                         (double)((int)((char)(p_7 / (
                                                               (float)p_9[1] + 830.f))) / -108) + 127.)) / (
                    ((unsigned long long)(0.f * ((float)p_11[2][2] / (
                                                 p_13 + 471.f))) ^ 530081929ULL % (
                                                                   (unsigned long long)v_15 % (
                                                                   v_17 + 466ULL) + 298ULL)) + 21ULL));
  result = (char)(- ((long)v % 584L));
  return result;
}


