#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 830380299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, long p_4, long long p_6, unsigned short p_9[3][1],
         int p_11)
{
  unsigned long v_23;
  long v_21;
  unsigned char v_19;
  float v_17;
  unsigned long v_15;
  short v_13;
  unsigned long long v;
  char result;
  v_23 = 674881302UL;
  v_21 = (long)p_9[0][0];
  v_19 = (unsigned char)137;
  v_17 = -1.96102444647e+38f;
  v_15 = 4294964127UL;
  result = (char)p;
  while (v_17 > (float)v_21) {
    v = v_23 - 506354264UL;
    v_23 = ((18685UL * v_15) % (~ v_15 + 367UL)) % (unsigned long)(v_21 + 351L);
    v_19 = (unsigned char)(((unsigned long long)p_11 - (18446744073709551588ULL + (unsigned long long)p_4)) >> (
                           ((long long)p_9[1][0] - p_6) & 63LL));
    v_17 = (float)(((v * (unsigned long long)p_4) % (unsigned long long)(
                    (-137068514LL + p_6) + 824LL)) % (unsigned long long)(
                   -59850L * (long)p_11 + 76L));
  }
  while_0_break: ;
  if ((long)v_19 * ((long)p_9[0][0] - v_21) - 50344L <= (long)p_9[2][0]) 
    result = (char)((long)(- p) / (p_4 * -17L + 427L));
  else {
    v = (unsigned long long)(! p_6 ^ (long long)(109 << (p_4 & 7L)));
    v_13 = (short)((float)p_4 / (((float)v_15 - v_17) + 774.f) + (float)(
                   (int)(- result) ^ 159));
    result = (char)((((unsigned long long)p_6 * v) / (unsigned long long)(
                     (int)p_9[2][0] / (p_11 + 943) + 671)) / (unsigned long long)(
                    ((unsigned long)(p_4 - p_4) & (unsigned long)((unsigned int)v_13 / 62607U)) + 652UL));
  }
  return result;
}


