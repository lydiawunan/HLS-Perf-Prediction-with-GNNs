#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 669239503
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, long p_5, unsigned char p_13, unsigned short p_17,
        double p_19)
{
  unsigned char v_21;
  unsigned long long v_15;
  long long v_11;
  char v_9;
  signed char v_7;
  unsigned int v;
  int result;
  v_21 = (unsigned char)179;
  v_11 = 7769LL;
  v_9 = (char)p;
  v_7 = (signed char)p_19;
  v = 4294906286U;
  result = 680523585;
  if (131 <= ! ((int)v_7 / 34595) % (((int)v_21 | 55381) / 513 + 883)) {
    v_15 = 96484298544858224ULL % (unsigned long long)(((int)(- p_17) & 209) + 762);
    v_11 = (long long)((result + -97) - (int)v_9) / (((long long)((int)((unsigned short)p) + (int)p_17) - v_11) + 361LL);
    v = 4227339239U / ((3876715263U - (unsigned int)((int)v_7 / ((int)((signed char)p) + 350))) + 111U);
  }
  else {
    v_15 = (unsigned long long)(-5766460117.98 + (double)((p_5 + (long)p_13) * 66245L));
    result = (int)(- p_19);
    v_7 = (signed char)-86;
  }
  while ((long long)(((unsigned long)(v / ((unsigned int)p + 529U)) % (unsigned long)(
                      p_5 + 817L)) / (unsigned long)((int)v_7 + 883)) != 
         - ((long long)v_9 + v_11) + (long long)(- (1789 + (int)p_13))) {
    v_15 = (unsigned long long)((double)v_15 * p_19 + (double)(! p_13)) + v_15;
    v = (unsigned int)(~ (- (~ p_17)));
    v_11 = (long long)(- (p - p) / ((float)(((int)((unsigned short)p) - (int)p_17) - (int)v_9) + 864.f));
  }
  while_0_break: ;
  return result;
}


