#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 490347389
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned long long p_5, char p_9,
         unsigned long p_11, double p_15)
{
  char v_23;
  signed char v_21;
  unsigned long v_19;
  float v_17;
  long long v_13;
  float v_7;
  float v;
  char result;
  v_23 = (char)p_11;
  v_21 = (signed char)85;
  v_19 = 43510UL;
  v_17 = (float)p_9;
  v_13 = -313749903LL;
  v_7 = -609.09777832f;
  result = (char)-3;
  if ((unsigned long)((-120 + (int)((signed char)v_7)) * (int)(- v_7)) > 
      (unsigned long)(((int)v_21 + 58585) + (int)((unsigned short)p_15) / 24367) / (
      ~ ((unsigned long)v_23 + 4294950768UL) + 217UL)) {
    result = (char)(- ((p_15 * (double)result) / ((double)p_11 + 1007.)));
    v_7 = (float)(- (v_13 + (long long)p_15) + (long long)((int)p_9 % (
                                                           (int)((char)(
                                                           (double)v_17 - p_15)) + 948)));
    v = (float)(~ -12222L);
  }
  else {
    v = (float)p;
    result = (char)((long long)((v_19 + (unsigned long)p_15) * (unsigned long)(- p_9)) + -7661LL);
    v_7 = (float)(335542281.788 - (double)((unsigned long long)(v_7 - (float)v_13) % 18446744072737494282ULL));
  }
  while ((unsigned long)(- ((float)p + v) / ((float)p_5 + 71.f)) <= 320475255UL) {
    v_7 = (int)((unsigned short)v_7) / 28899;
    result = (char)((int)p_9 | (int)(- p_9));
    v = (float)(- (- (114 + (int)((unsigned char)942.131964959))));
  }
  while_0_break: ;
  return result;
}


