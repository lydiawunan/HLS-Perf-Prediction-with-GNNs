#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 665691707
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, unsigned long long p_13, unsigned char p_15[1][2],
          long p_17, signed char p_19)
{
  unsigned long long v_11;
  long v_9;
  signed char v_7;
  unsigned long long v_4;
  unsigned long long v;
  float result;
  v_11 = 65331ULL;
  v_9 = -745883470L;
  v_7 = (signed char)-5;
  v_4 = p_13;
  v = 18446744073709523813ULL;
  result = (float)p_17;
  if ((unsigned long long)(! (~ (v_9 + -24643L))) == (unsigned long long)(
                                                     (int)(~ p_15[0][1]) & (int)p_15[0][1]) * v) {
    result = (float)(18446744073709540341ULL + ((v_4 >> (v_9 & 63L)) - (unsigned long long)(
                                                (int)((signed char)1.4944100946e+37f) - (int)v_7)));
    v_7 = (signed char)((int)p * ((int)v_7 * (int)((signed char)p) & (int)p));
    v = (unsigned long long)-356.129343591;
  }
  else {
    v_7 = (signed char)((unsigned int)p_19 & 42645U);
    v_4 = (~ v_11 % ((p_13 | (unsigned long long)p_15[0][1]) + 135ULL)) / (unsigned long long)(
          (long)((int)p_15[0][1] + (int)((unsigned char)-1.58852835995e+38f)) * (
          55536L / (p_17 + 79L)) + 705L);
    v = 18446744073709498529ULL;
  }
  while ((double)((float)(v + 18446744073709551542ULL) * -4.60611189622e+37f) >= 
         4294939238. * ((double)(18446744072748255965ULL - v_4) / (932009543. * p + 263.))) {
    v_7 = (int)v_7 / 19683;
    result = (float)(-57661U);
    v = (unsigned long long)p;
    v_4 = (unsigned long long)((unsigned long)((unsigned int)p + 1556506256U) + 52376UL);
  }
  while_0_break: ;
  return result;
}


