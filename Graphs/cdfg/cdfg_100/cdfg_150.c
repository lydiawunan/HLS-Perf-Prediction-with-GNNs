#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1038321510
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, unsigned short p_5, int p_7,
                  unsigned short p_9[1], int p_11[5])
{
  signed char v_27;
  unsigned long v_25;
  unsigned long v_23;
  unsigned char v_21;
  double v_19;
  int v_17;
  long v_15;
  unsigned long long v_13;
  unsigned long v;
  unsigned long result;
  v_27 = (signed char)-113;
  v_25 = 4294955989UL;
  v_23 = 25037UL;
  v_21 = (unsigned char)p_11[2];
  v_19 = 5754698875.23;
  v_17 = p_11[1];
  v_15 = (long)p_9[0];
  v_13 = (unsigned long long)p_11[1];
  while ((unsigned long long)((unsigned long)((double)((unsigned long long)v_17 % (
                                                       p + 20ULL)) - v_19) * (
                              4294920656UL / ((unsigned long)v_21 / (
                                              v_23 + 878UL) + 501UL))) > 
         ((unsigned long long)((unsigned long)p_11[3] % (v_25 + 601UL)) - (
          (unsigned long long)-735.157386196 + p)) % (unsigned long long)(
         (18 + ((int)((unsigned char)-9733255168.f) - (int)v_21)) + 11)) {
    v_17 = (int)v_27 - -4379;
    v_19 = (double)(~ p_5);
    v_23 = ((unsigned long)p_9[0] + v_25 % 11428UL) - (unsigned long)(
           v_17 + p_11[2]);
    v_17 = ((int)((signed char)v_19) % 70) / ((int)p_5 + 83);
  }
  while_0_break: ;
  if (~ (p | (unsigned long long)p_11[4]) / (unsigned long long)(~ (457132571UL / (unsigned long)(
                                                                    (int)p_9[0] + 157)) + 111UL) < 
      p * (v_13 - 4550ULL) + (unsigned long long)v_15) {
    v = (unsigned long)(- ((int)p_5 * p_7) - ((int)p_9[0] + 17263) / 81577);
    result = (unsigned long)((unsigned long long)(! v) % (p + 839ULL));
  }
  else result = (unsigned long)(! 497);
  return result;
}


