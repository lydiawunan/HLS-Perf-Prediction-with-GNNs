#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 553672834
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, unsigned char p_4, unsigned long p_11[5][5][3],
                   unsigned int p_15)
{
  unsigned long v_13;
  float v_9;
  short v_7;
  double v;
  unsigned short result;
  v_13 = 53394UL;
  v_9 = (float)p_4;
  v_7 = (short)p;
  v = (double)(~ p_15);
  result = (unsigned short)((unsigned long long)(-1LL & (long long)p_11[2][3][2]) - 
                            (unsigned long long)(~ ((long)v % 722274295L)) / (
                            ((unsigned long long)p_11[2][3][2] & 18446744052991796976ULL) + 749ULL));
  v = (double)((unsigned long)v_7 / ((unsigned long)(- v + (double)(4611 * (int)result)) / (
                                     ((unsigned long)v_9 % (p_11[2][1][0] + 906UL) + (
                                      v_13 & (unsigned long)p_4)) + 268UL) + 895UL));
  result = (unsigned short)(((long long)((unsigned long)p ^ 4294938972UL) - - (
                             14643LL % (long long)((int)result + 885))) % (long long)(
                            (933352 & (int)(~ p_4) * ((int)p_4 * (int)((unsigned char)v))) + 60));
  return result;
}


