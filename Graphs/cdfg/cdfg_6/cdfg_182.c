#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 672254894
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, long long p_4, unsigned char p_6, unsigned char p_9,
                 short p_13)
{
  float v_21;
  signed char v_19;
  unsigned short v_17;
  unsigned long long v_15;
  long v_11;
  int v;
  unsigned int result;
  v_21 = (float)p_4;
  v_19 = (signed char)78;
  v_17 = (unsigned short)6697;
  v_15 = 18488704ULL;
  v_11 = -38347L;
  v = -248858171;
  while (! (- v_11 + (long)((int)p_13 % ((int)p_6 + 580))) > v_11 % (long)(
                                                             460 * (int)p_13 + 609)) {
    v_17 = (int)v_17 << 1;
    v_11 = (long)(v_15 >> (179 % ((int)(- v_21) + 589) & 63));
    v_15 = (unsigned long long)v_11 - v_15 % (unsigned long long)((int)p_13 + 274);
    v_11 = (long)(~ ((int)v_19 % ((int)((signed char)v_21) + 274)) * (
                  (int)(~ p_6) * (int)(~ p_9)));
  }
  while_0_break: ;
  if (0LL > (long long)(((v + 31386) - 190) * ((53770 >> ((int)((unsigned short)5824022528.f) & 15)) - 
                                               (int)p_9 * -26911))) result = (unsigned int)(~ (~ p));
  else result = (unsigned int)(102LL + (- p_4 + (long long)(-100 % ((int)p_6 + 321))));
  return result;
}


