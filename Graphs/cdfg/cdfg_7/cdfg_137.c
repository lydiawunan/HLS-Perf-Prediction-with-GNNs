#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 834831310
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, unsigned char p_9, unsigned long long p_11,
         float p_13, char p_15[3][4])
{
  unsigned long long v_19;
  signed char v_17;
  unsigned short v_7;
  float v_5;
  char v;
  char result;
  v_17 = (signed char)-11;
  v_7 = (unsigned short)49082;
  v_5 = -731.932617188f;
  result = (char)1;
  if (-2.86385473668e+38f < (float)result) {
    result = (char)16;
    v_19 = (unsigned long long)(- v_5);
    v = (char)((unsigned long long)(((int)((char)v_5) << ((int)p_15[0][2] & 7)) - 
                                    (int)v_17 % ((int)p_9 + 970)) ^ ~ (
               (unsigned long long)p_9 / (v_19 + 40ULL)));
  }
  else {
    result = (char)(- (- v_5) / ((- v_5 + (float)((long)p_9 / 475096173L)) + 128.f));
    v_5 = (float)(! ((unsigned long long)v_7 * ((unsigned long long)v_17 + p_11)));
    v = (char)-11;
  }
  while (~ ((long long)(112 ^ (int)v) % (((long long)p - 713506068LL) + 233LL)) <= (long long)(
         -65438616 % ((int)result + 58) ^ - ((int)((signed char)v_5) - (int)p))) {
    v = (unsigned long long)v_7 ^ 336741216ULL;
    v_7 = (unsigned short)p_15[1][0];
    v_5 = - (- ((float)v - p_13));
    result = (char)((unsigned long long)((int)(~ p_9) - (-62 + (int)p)) * (
                    36589ULL & ~ p_11));
  }
  while_0_break: ;
  return result;
}


