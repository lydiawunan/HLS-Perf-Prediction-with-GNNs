#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 429874012
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, char p_5, unsigned char p_25)
{
  unsigned short v_23;
  signed char v_21;
  long long v_19;
  float v_17;
  unsigned long v_15;
  unsigned long v_13;
  unsigned int v_11;
  double v_9;
  int v_7;
  long long v;
  char result;
  v_23 = (unsigned short)p;
  v_19 = (long long)p_5;
  v_17 = 2.70131110047e+38f;
  v_15 = 69626791UL;
  v_13 = (unsigned long)p;
  v_9 = (double)p_25;
  v_7 = 48107;
  result = (char)p_25;
  if ((long)(- ((double)((int)p_25 + (int)v_23) - (v_9 + (double)p_5))) != 
      ((long)p_5 * 466881134L) % (long)(! ((int)result * p) + 916)) {
    v_11 = (unsigned int)(! ((long long)(v_15 ^ (unsigned long)v_17) % (
                             - v_19 + 379LL)));
    v_7 = (int)(18446744073709551592ULL % (((unsigned long long)v_13 ^ 566435099ULL) + 477ULL) & (
                244ULL & (222482460ULL & (unsigned long long)p)));
    v = (long long)(- (- (! v_11)));
  }
  else {
    v_9 = (double)((((int)p_25 & 18) + 57806) * ((int)((unsigned char)410.044433594f) / 195));
    v_21 = (signed char)v_23;
    v = (long long)(17315 ^ (((int)v_21 + 29034) + (int)2.94924834607e+38f));
  }
  result = (char)(v * (long long)(3314473976UL + (unsigned long)p) & (long long)(
                  (double)((int)p_5 - v_7) + v_9));
  return result;
}


