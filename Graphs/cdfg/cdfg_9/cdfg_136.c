#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1032556215
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned int p_5, long long p_11, float p_13,
           unsigned long p_15)
{
  signed char v_25;
  long v_23;
  unsigned char v_21;
  long v_19;
  float v_17;
  unsigned char v_9;
  signed char v_7;
  unsigned int v;
  double result;
  v_25 = (signed char)p_15;
  v_23 = -63617L;
  v_21 = (unsigned char)112;
  v_19 = (long)p_13;
  v_17 = -886.389038086f;
  v_9 = (unsigned char)p_15;
  v_7 = (signed char)68;
  v = 850937883U;
  while ((unsigned long)(- ((v_17 * 93.f) / (p_13 / (p_13 + 647.f) + 477.f))) < 
         (unsigned long)(-591116567 % ((-48 + (int)v_7) + 58)) % ((p_15 + (unsigned long)p) * (unsigned long)(
                                                                  (int)p / 17825) + 59UL)) {
    v = v_19 | 54L;
    v_17 = (float)(v_23 + (long)v_25);
    v_9 = (unsigned char)p;
    v_7 = (signed char)(((unsigned long)(! p_5) - 261028689UL) - (unsigned long)(
                        (unsigned int)((int)v_21 % ((int)v_9 + 535)) % (
                        (3395372483U - v) + 999U)));
  }
  while_0_break: ;
  if ((long long)p > (long long)(4469313428.92 * (double)v_17) * (-4470739910LL & p_11) - (long long)(! (~ p_15))) {
    v_9 = (unsigned char)(- ((int)v_7 % ((int)(! v_9) + 976)));
    result = (double)((v * 4294938948U ^ (p_5 + (unsigned int)v_7)) * (unsigned int)(
                      (float)((long long)v_9 * p_11) - p_13 * -8388.f));
    result = (double)(~ ((int)((unsigned short)((double)p + result)) + (int)p));
  }
  else result = (double)(- ((long long)p_15 % -881306532LL) / (long long)(
                         p_15 + 777UL));
  return result;
}


