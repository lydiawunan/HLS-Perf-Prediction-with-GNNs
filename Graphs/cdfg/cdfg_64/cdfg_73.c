#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 164845730
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, float p_15, signed char p_19, unsigned int p_25)
{
  unsigned int v_27;
  long v_23;
  unsigned short v_21;
  char v_17;
  unsigned char v_13;
  unsigned long v_11;
  long v_9;
  long long v_7;
  short v_5;
  int v;
  float result;
  v_27 = 4294951177U;
  v_23 = (long)p_15;
  v_21 = (unsigned short)20091;
  v_17 = (char)p;
  v_13 = (unsigned char)p;
  v_7 = (long long)p_15;
  v_5 = (short)-20184;
  result = (float)p_25;
  while ((unsigned long)-2.36823884621e+38f - - (p - 28728UL) > (unsigned long)v_17) {
    v_5 = v_23 + -21512L;
    v_21 = (unsigned short)(~ ((p_25 + (unsigned int)1.48000670553e+38) ^ (
                               v_27 - (unsigned int)p_19)));
    result = (float)v_7;
    v_17 = (char)(((result + (float)v_13) + (float)p_19) - (float)((unsigned long long)(~ v_5) - 
                                                                   14913ULL * (unsigned long long)p));
  }
  while_0_break: ;
  if ((337.968174635 + (double)(- p_15)) - (double)v_21 <= (double)(- (
      (int)(~ p_19) % 27))) {
    v = (int)(! (- v_7));
    v = (int)(((unsigned long)(v ^ 31512) * ~ p) / ((unsigned long)((float)(
                                                                    v % (
                                                                    (int)v_5 + 842)) - result) + 234UL));
    result = (float)(~ v);
  }
  else {
    v_11 = (unsigned long)(((int)((char)p_15) ^ (int)(! v_17)) - (int)p_19);
    v_9 = (long)(601382490UL * ((75UL + p) % 29960UL));
    result = (float)(v_9 << ((11245UL ^ v_11 % (unsigned long)((int)v_13 + 319)) & 31UL));
  }
  return result;
}


