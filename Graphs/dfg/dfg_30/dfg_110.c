#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 75637593
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p[5][5], double p_7, char p_11,
                  unsigned long p_19)
{
  unsigned long v_17;
  long long v_15;
  signed char v_13;
  unsigned short v_9;
  char v_5;
  unsigned short v;
  unsigned char result;
  v_17 = (unsigned long)p_11;
  v_15 = 14249LL;
  v_13 = (signed char)-96;
  v_9 = (unsigned short)p_7;
  v = (unsigned short)(~ ((unsigned long)p_11 - p[0][0]) * (unsigned long)(
                       (int)v_13 >> (((long long)p_11 - v_15) & 7LL)) - (unsigned long)(
                       (int)v_13 / ((int)((signed char)((double)(4294938952UL * v_17) * (
                                                        p_7 * (double)p_19))) + 26)));
  result = (unsigned char)(475310456 / ((int)(~ v) + 271));
  v_5 = (char)(((unsigned long long)p_7 % 18446724038682662011ULL) / (unsigned long long)(
               ((unsigned int)((int)v_9 << (p[4][3] & 15UL)) - ((unsigned int)-379.177612305f - (
                                                                4294928421U + (unsigned int)result))) + 473U));
  result = (unsigned char)(- (p[0][1] * (unsigned long)(! ((int)v % (
                                                           (int)v_5 + 10)))));
  return result;
}


