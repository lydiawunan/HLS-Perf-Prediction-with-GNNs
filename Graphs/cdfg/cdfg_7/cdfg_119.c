#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 502791113
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, signed char p_4, float p_15, unsigned int p_21,
                  double p_23)
{
  int v_27;
  short v_25;
  char v_19;
  int v_17;
  long v_13;
  unsigned long long v_11;
  signed char v_9;
  long long v_7;
  char v;
  unsigned char result;
  v_27 = (int)p_23;
  v_25 = (short)p_4;
  v_19 = (char)-24;
  v_17 = (int)p_4;
  v_13 = 159001324L;
  v_11 = 18446744073709488746ULL;
  v_9 = (signed char)p_21;
  v_7 = (long long)p_21;
  result = (unsigned char)186;
  while ((unsigned long long)(- (p_23 / ((double)v_19 + 399.)) - (double)v_13) < 
         (unsigned long long)((int)((signed char)(p_23 / 20483.)) * -18) / (
         (unsigned long long)(246.f - p_15) * ((unsigned long long)p_4 + v_11) + 583ULL)) {
    v_25 = (unsigned long)v_25 / 3667745221UL;
    v_19 = (char)(((29379 / (v_27 + 966)) % (! v_27 + 417)) / -20279);
    v_13 = (long)((4294921670ULL + ((unsigned long long)-617.663634608 + 38460ULL)) + (unsigned long long)(
                  (unsigned int)(v_17 & (int)v_19) / (p_21 + 727U)));
    v_11 = (unsigned long long)((unsigned int)(~ p_4) % (p_21 + 736U));
  }
  while_0_break: ;
  if ((double)((int)(~ result) + (int)((unsigned char)-300.518157959f)) / (
      p_23 + 575.) >= (double)(- ((int)p_4 / ((int)((signed char)p_23) + 439) & -4))) {
    v = (char)((int)v_9 / ((int)result + 734));
    result = (unsigned char)((long long)p_4 - ! ((long long)v - v_7));
    result = (unsigned char)((int)(! (~ result)) - (int)((unsigned char)p));
  }
  else {
    v_11 = (unsigned long long)((v_13 * (long)p_15) % 215L + (long)(v_17 / (
                                                                    (
                                                                    -47748 | (int)v_19) + 607)));
    v = (char)v_11;
    result = (unsigned char)(! ((int)(! v) % 57010));
  }
  return result;
}


