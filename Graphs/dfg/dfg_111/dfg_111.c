#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 410391283
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, char p_5[3][4][3], unsigned short p_7)
{
  double v_13;
  unsigned char v_11;
  unsigned int v_9;
  double v;
  short result;
  v_13 = -3.01182581704e+37;
  v_11 = (unsigned char)p_5[0][0][0];
  result = (short)(! (char)-74);
  v = (double)result;
  v_9 = (unsigned int)((double)v_11 * v_13);
  result = (short)((unsigned long long)(p * (long)((int)((char)(v - 1036077282.)) >> (
                                                   (int)(~ p_5[2][3][2]) & 7))) ^ (
                   ((unsigned long long)((long)p_7 * 3706L) | (18446744073582748183ULL + (unsigned long long)v_9)) - (unsigned long long)(
                   (int)(! p_7) / ((int)((short)v) * (int)result + 474))));
  return result;
}


