#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 702689611
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned long long p_5, int p_15)
{
  char v_13;
  unsigned short v_11;
  float v_9;
  long long v_7;
  unsigned long long v;
  short result;
  v_13 = (char)p_15;
  v_11 = (unsigned short)50130;
  v_7 = -820113754LL;
  result = (short)(((int)v_13 >> ((unsigned long long)p * p_5 & 7ULL)) / (
                   p_15 + 208));
  if ((unsigned long long)v_11 == (unsigned long long)(- ((int)p % ((int)v_13 + 419))) / (
                                  (unsigned long long)(14001 % ((int)result + 263)) * 18922067822665785ULL + 499ULL)) 
    result = (short)p;
  else {
    v_9 = (float)(signed char)120;
    v = (unsigned long long)(- (- ((float)v_7 * v_9)));
    result = (short)(((v / (p_5 + 398ULL)) / 18446744073709534823ULL) % (
                     v + 924ULL));
  }
  return result;
}


