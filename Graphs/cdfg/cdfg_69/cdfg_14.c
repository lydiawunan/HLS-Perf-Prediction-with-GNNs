#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 884229634
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, float p_5)
{
  double v_19;
  unsigned char v_17;
  char v_15;
  char v_13;
  unsigned int v_11;
  char v_9;
  char v_7;
  unsigned long v;
  char result;
  v_19 = -931.741385882;
  v_17 = (unsigned char)p;
  v_15 = (char)p_5;
  v_13 = (char)p;
  v_11 = (unsigned int)p_5;
  v_9 = (char)-29;
  v_7 = (char)p;
  result = (char)p;
  if ((float)((long)((int)(- v_7) - (int)((char)v_19)) * 15711923L) == 
      0.f / (p_5 / 18644628.f + 105.f) + (float)result) {
    v_9 = (char)(((unsigned long)(8. + v_19) + (unsigned long)v_17 % 4294963523UL) % 68931UL);
    v = (unsigned long)(! (7U - (unsigned int)result));
    result = (char)((p % ((unsigned int)p_5 + 86U)) % (- (v_11 % 29413U) + 668U));
  }
  else {
    v = 4294967184UL;
    v_11 = (unsigned int)(! ((int)((char)p_5) + (int)v_13)) | p / ((unsigned int)(
                                                                   16.f - p_5) + 522U);
    v_7 = (char)v;
  }
  while ((unsigned long long)(24546LL / (long long)(p + 712U)) != ! (
         (unsigned long long)(v / ((unsigned long)p_5 + 316UL)) + (392184754ULL | (unsigned long long)p))) {
    v_13 = (int)v_7 * (int)((char)-145.337185085);
    v_7 = (char)(v_11 + (unsigned int)(((int)v_13 - (int)v_13) * ((int)v_15 - (int)v_17)));
    result = (char)((unsigned long)v_9 * 33280UL);
    v = (unsigned long)((long long)(((int)v_9 - 26) / 9304) + 14993937387LL * (long long)(~ v_7));
  }
  while_0_break: ;
  return result;
}


