#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 61066966
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p[5][3][2], long p_4, float p_6,
                  unsigned char p_8, short p_17)
{
  signed char v_23;
  unsigned char v_21;
  unsigned long v_19;
  unsigned short v_15;
  double v_13;
  short v_11;
  double v;
  unsigned char result;
  v_23 = (signed char)-60;
  v_21 = (unsigned char)126;
  v_19 = 4828UL;
  v_15 = (unsigned short)52171;
  v_13 = -806.469255756;
  v_11 = (short)1040;
  result = (unsigned char)132;
  if ((139UL & v_19) / (unsigned long)((int)result + 191) + 968432939UL <= (unsigned long)(
      ((long)p_6 >> ((p_4 >> ((int)v_23 & 31)) & 31L)) << (! ((int)v_23 % (
                                                              (int)v_23 + 425)) & 31))) {
    v_13 = (double)(((unsigned long)(-10236L + (long)v_13) % 698901839UL) * 35292UL);
    v_19 = (unsigned long)(~ (((int)((unsigned short)p_6) - 5800) + (int)p_17));
    v = (double)p_4;
  }
  else {
    v_13 = (double)(-(short)10069);
    result = (unsigned char)(- (! p_4) * (780507632L + 4324L / (long)(
                                                       (int)v_21 + 390)));
    v = (double)(1061731540ULL * (unsigned long long)((long)v_21 * p_4) + (unsigned long long)(
                 (long long)(-6262 + (int)v_15) + p[2][1][0]));
  }
  while ((int)((float)(~ (p[2][2][0] + (long long)p_4)) / (p_6 + 1005.f)) <= ~ (
         (int)p_8 * (int)((unsigned char)v) - (int)((float)v_11 / (p_6 + 791.f)))) {
    result = v_13 + 4294925031.;
    v = (double)v_19;
    v_13 = (double)((long long)v_11 * (344910475LL % (long long)((int)p_17 + 184) ^ (long long)v_11));
    v_11 = (short)(! v_15);
  }
  while_0_break: ;
  return result;
}


