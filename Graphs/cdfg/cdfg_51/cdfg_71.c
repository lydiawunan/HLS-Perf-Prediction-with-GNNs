#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 398883554
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p[4][3][2], signed char p_4, char p_7,
                unsigned long long p_9, unsigned short p_11)
{
  long long v_21;
  double v_19;
  int v_17;
  int v_15;
  int v_13;
  signed char v;
  signed char result;
  v_21 = (long long)p_7;
  v_19 = 7.8332214548e+37;
  v_17 = (int)p_7;
  v_15 = (int)p_7;
  v_13 = 21745;
  v = (signed char)-52;
  while (((float)p_7 / (p[3][1][1] + 130.f)) * (float)(p_9 % (unsigned long long)(
                                                       v_13 + 289)) - (
         (float)(v_15 * -27155) - (float)p_4 / (p[1][0][0] + 461.f)) < (float)(
         ! p_9 % (unsigned long long)(((int)p[3][1][0] | v_17) % ((int)(~ p_4) + 918) + 633))) {
    v_19 = v_21 % ((long long)(v_19 - -51066.) + 714LL);
    v_15 = (int)(- 7381743104.f);
    v_21 = -27859LL;
    v_17 = (int)((unsigned long long)((unsigned long)v_13 - (1023124488UL | (unsigned long)6246365539.35)));
  }
  while_0_break: ;
  result = (signed char)((unsigned long long)(58817U / ((unsigned int)p[0][0][0] + 615U) & (unsigned int)(- p_4)) * (
                         (unsigned long long)((int)v - (int)p_7) * (83ULL - p_9)));
  return result;
}


