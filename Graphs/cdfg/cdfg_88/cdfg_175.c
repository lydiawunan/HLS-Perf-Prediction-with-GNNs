#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 581611376
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, short p_5, long long p_7,
                       unsigned long p_13, unsigned char p_19[4][4])
{
  int v_17;
  unsigned short v_15;
  long long v_11;
  char v_9;
  long long v;
  unsigned long long result;
  v_17 = (int)p;
  v_9 = (char)37;
  if ((int)v_9 > 3545 * (int)p_19[2][0]) {
    v_11 = (long long)p_13;
    result = (unsigned long long)(! (~ p_7) >> ((long long)v_9 / (~ v_11 + 838LL) & 63LL));
    v = (long long)result;
  }
  else {
    v_15 = (unsigned short)(! 689394004ULL);
    result = (unsigned long long)(3339620618U / (unsigned int)(((int)v_15 + (
                                                                38505 + v_17)) + 762));
    v = (long long)p;
  }
  result = (unsigned long long)(! v % (long long)((int)p + 550)) * ((unsigned long long)(- p_5) % (
                                                                    result / 29398ULL + 973ULL));
  return result;
}


