#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 298203812
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p[1], unsigned short p_5[5], float p_11[3][5][2],
          unsigned int p_15, long p_17[3][2])
{
  char v_25;
  short v_23;
  unsigned long v_21;
  unsigned long long v_19;
  unsigned short v_13;
  short v_9;
  unsigned char v_7;
  unsigned int v;
  short result;
  v_25 = (char)-10;
  v_23 = (short)p[0];
  v_21 = 4294932550UL;
  v_19 = (unsigned long long)p_5[3];
  v_13 = (unsigned short)p_15;
  v_7 = (unsigned char)88;
  v = (unsigned int)p[0];
  result = (short)p_15;
  while (~ ((v_19 ^ (unsigned long long)p[0]) & (unsigned long long)(
            p_15 * (unsigned int)result)) == (unsigned long long)(36314UL * (
                                                                  v_21 % (unsigned long)(
                                                                  (int)v_23 + 152) + 33554UL))) {
    result = (short)((1014808358ULL ^ ((unsigned long long)result ^ v_19)) % (unsigned long long)(
                     p_17[1][1] + 595L));
    v_7 = (unsigned char)0;
    v_23 = (short)(- (! (~ v_25)));
  }
  while_0_break: ;
  while (((unsigned int)((int)p[0] - -120) | 36466U) + ((unsigned int)-2034865280.f * 29712U) / 18225U != 
         (4294967293U + ~ v) + (unsigned int)(~ p_5[3])) {
    v_7 = (int)v_7 * (int)((unsigned char)-2.4348744719e+38f);
    v_9 = (short)(~ p_15);
    result = (short)(- ((p_11[1][0][0] / -50078.f) / ((float)v_13 + 300.f)));
    v = (unsigned int)(((double)(241 - (int)v_9) * 4267998778.08) * (double)p_11[1][4][1]);
  }
  while_0_break_0: ;
  return result;
}


