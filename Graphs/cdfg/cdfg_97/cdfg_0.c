#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 691377673
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p[4][2][1], float p_9[1][1], unsigned short p_11,
           unsigned long p_13, double p_17[2][4])
{
  signed char v_21;
  long long v_19;
  char v_15;
  long v_7;
  int v_4;
  int v;
  double result;
  v_21 = (signed char)-91;
  v_19 = (long long)p_13;
  v_15 = (char)121;
  v_7 = 908801613L;
  result = -9863149931.08;
  while ((unsigned long long)(((4294965306UL ^ p_13) - (unsigned long)(- p_17[1][3])) & (
                              (p_13 << (v_7 & 31L)) - (unsigned long)(
                              (int)v_15 % 41292))) > ~ (34291870025778ULL + (unsigned long long)v_19)) {
    v_7 = (int)v_21 % 507652544;
    v_19 = (long long)p[3][1][0];
    result = (double)(- p_9[0][0] / ((float)(v_7 * (long)p_11) + 810.f) + (float)(
                      (unsigned long)-329.170074463f << (p_13 & 31UL)));
    v_7 = (long)(- (4157542144. + result));
  }
  while_0_break: ;
  if ((unsigned long)(815340125U % (unsigned int)((int)(~ (~ p_11)) + 59)) >= 
      (- p_13 * 3767884793UL) * (unsigned long)(! ((int)v_15 / ((int)((char)result) + 274)))) {
    v_4 = (int)(21L * ! v_7);
    v = (int)(((unsigned long long)(~ p[1][1][0]) - 55397ULL) * 18446744073589852536ULL);
    result = (double)(v % (v_4 + 223));
  }
  else result = (double)(- p_9[0][0]);
  return result;
}


