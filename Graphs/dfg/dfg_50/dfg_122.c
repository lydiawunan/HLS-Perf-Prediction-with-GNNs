#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 160216337
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, char p_4, unsigned long long p_6,
                  unsigned char p_9, signed char p_15)
{
  unsigned char v_13;
  unsigned char v_11;
  short v;
  unsigned char result;
  v_13 = (unsigned char)p_6;
  v_11 = (unsigned char)p_4;
  v = (short)-23312;
  v_13 = (unsigned char)((unsigned long long)v_13 / ((unsigned long long)(! (
                                                     -60 % ((int)p_15 + 121))) * ! (! p_6) + 502ULL));
  v = (short)(0U - (unsigned int)((int)v_13 % (- ((int)v + (int)p_9) + 213)));
  result = (unsigned char)((-109041422LL % (long long)((int)(- (- p)) + 1024)) / (long long)(
                           (int)p + 199));
  result = (unsigned char)((unsigned long long)(- (3491407249UL / (unsigned long)(
                                                   (int)p + 496) + (unsigned long)p_4)) * (
                           ((unsigned long long)result / ((p_6 & 35374ULL) + 561ULL)) / (unsigned long long)(
                           ((int)v / ((int)p_9 + 122) >> ((int)v_11 & 31)) + 607)));
  return result;
}


