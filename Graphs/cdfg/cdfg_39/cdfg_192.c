#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 225550847
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, unsigned int p_7, unsigned short p_11, unsigned long p_17)
{
  unsigned char v_25;
  unsigned long v_23;
  unsigned long long v_21;
  long long v_19;
  char v_15;
  short v_13;
  long v_9;
  int v_5;
  unsigned int v;
  char result;
  v_25 = (unsigned char)119;
  v_23 = (unsigned long)p_7;
  v_21 = 308074991ULL;
  v_19 = (long long)p_7;
  v_15 = (char)p_7;
  v_9 = 803757175L;
  v = 4294958112U;
  if ((((unsigned long long)v_9 ^ v_21) + (unsigned long long)((unsigned long)v_9 ^ v_23)) - (unsigned long long)v_25 > (unsigned long long)-912.333557129f) {
    v_13 = (short)(! ((unsigned long)((unsigned int)v_15 % (p_7 + 261U)) | 37183UL));
    result = (char)((- v_9 + (long)p_11) - (long)(! v_13));
    v_5 = (int)(- (p_7 % (unsigned int)((int)result + 1001)));
  }
  else {
    result = (char)v_19;
    v = (unsigned int)(~ (- (~ p_17)));
    v_5 = (int)(! v_9 % (long)(61 / ((int)(! p_11) + 415) + 995));
  }
  if ((unsigned int)((int)((char)-759.255859375f) * (int)(! result)) % (
      - (v / (unsigned int)(v_5 + 873)) + 441U) != 98U) result = (char)p;
  else result = (char)(- p * 1.84467440737e+19);
  return result;
}


