#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 347101260
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p[2][2][3], long p_13, signed char p_15,
                       long p_17, signed char p_21)
{
  signed char v_19;
  long long v_11;
  char v_9;
  unsigned short v_7;
  unsigned int v_4;
  unsigned char v;
  unsigned long long result;
  v_19 = (signed char)-118;
  v_11 = (long long)p_17;
  v_9 = (char)-25;
  v_7 = (unsigned short)37640;
  v_4 = (unsigned int)p_17;
  v = (unsigned char)p[1][0][0];
  result = 51059ULL;
  if ((((unsigned long long)v % 18446744073556759651ULL) / (unsigned long long)(
       (int)(! v) + 65)) % (unsigned long long)((long long)(- v) * (v_11 - (long long)p_15) + 995LL) >= (unsigned long long)(
      (long)((int)(- v_9) - (int)(- p_21)) - (! p_13 ^ (long)v_7))) {
    v_9 = (char)((long long)((long)(- p[1][0][0]) / (((long)p_15 - p_17) + 464L)) * (
                 v_11 - (long long)(4294967249U % (v_4 + 920U))));
    v = (unsigned char)(((unsigned long)((unsigned int)p_15 % (v_4 + 260U)) - (unsigned long)(
                         -21590L - p_13)) ^ (unsigned long)p_15);
    v_4 = (unsigned int)(((13614L - (long)p[0][0][0]) & 84L) + -143063200L);
  }
  else {
    result = (unsigned long long)((long long)((int)v_19 + (int)p_21) - 
                                  - v_11 % (long long)((unsigned int)-7449726464.f * 3508325733U + 120U));
    v_9 = (char)((unsigned int)p[1][1][1] * (0U ^ 447115838U % (unsigned int)(
                                                  (int)p_15 + 648)));
    v_7 = (unsigned short)1;
  }
  while ((long long)(! v) != (long long)v_4 / ((long long)(86 * p[1][0][2]) * -747622709LL + 723LL)) {
    v_11 = (int)v_9 % -69;
    v_9 = (char)v;
    result = (unsigned long long)v_7;
    v_4 = (unsigned int)((18263ULL % (unsigned long long)(v_11 + 509LL) - 
                          result % (unsigned long long)((int)v_7 + 627)) % (
                         ((unsigned long long)p_13 & result) / ((unsigned long long)-4.57737882065e+37f + 682ULL) + 381ULL));
  }
  while_0_break: ;
  return result;
}


