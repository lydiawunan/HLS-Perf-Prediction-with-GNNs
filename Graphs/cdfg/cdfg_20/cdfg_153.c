#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 197482840
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, unsigned short p_4, double p_6, unsigned char p_9,
                unsigned short p_11[2])
{
  float v_21;
  float v_19;
  char v_17;
  signed char v_15;
  unsigned int v_13;
  unsigned int v;
  signed char result;
  v_21 = (float)p_4;
  v_19 = 5268896768.f;
  v_17 = p;
  v_15 = (signed char)78;
  v_13 = (unsigned int)p;
  v = 4294916656U;
  while (! (272229334ULL << ((int)p_11[0] & 63)) < (unsigned long long)(! (
         (long long)p * 910226535LL + (long long)v_13))) {
    v = (int)v_19 ^ ((int)v_15 | 43210);
    v_19 = - (- ((float)v - v_21));
    v_17 = v_17;
    v_13 = 4294967280U;
  }
  while_0_break: ;
  if (13611ULL % ((18446744073349495069ULL >> (v % (unsigned int)((int)p_9 + 29) & 63U)) + 3ULL) <= (unsigned long long)p_11[1]) 
    result = (signed char)(-22631998L + (long)p);
  else {
    result = (signed char)p_4;
    result = (signed char)((int)(- (~ p)) + (int)(- (- result)));
  }
  return result;
}


