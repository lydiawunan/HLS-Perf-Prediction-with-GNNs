#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 847520296
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, float p_4, unsigned long p_9, int p_11, long long p_15)
{
  float v_27;
  long v_25;
  int v_23;
  long long v_21;
  unsigned long v_19;
  signed char v_17;
  signed char v_13;
  unsigned short v_7;
  long long v;
  short result;
  v_27 = -204.843994141f;
  v_25 = 9552L;
  v_23 = (int)p;
  v_21 = -13313LL;
  v_13 = (signed char)-86;
  v_7 = (unsigned short)2398;
  v = (long long)p_4;
  result = (short)10085;
  if ((long long)(((float)(! v_21) + (float)v_23 / -362.416931152f) / (
                  (float)(p_9 + (unsigned long)(v_25 * (long)p)) + 847.f)) >= 
      ((p_15 >> ((int)result & 63)) * (long long)(- p)) * (long long)(- (
      v_27 - (float)p_15))) {
    v_7 = (unsigned short)(- ((p_11 - 89) * p_11));
    v_13 = (signed char)((long long)((int)(- result) >> (((long long)p_9 + p_15) & 15LL)) - 
                         ! v * -372752005LL);
    v = - ((v - (long long)p_11) | (long long)(! v_13));
  }
  else {
    v_19 = (unsigned long)((unsigned long long)((v_21 % ((long long)p_4 + 562LL)) * (long long)(
                                                (long)p - -559682467L)) / (
                           (unsigned long long)(v * -946108291LL) * (
                           (unsigned long long)p_4 - 55141ULL) + 738ULL));
    v_17 = (signed char)(3875389714LL + ((p_15 + (long long)v_13) - (long long)(! p_9)));
    v = ((long long)((int)v_17 + (int)((signed char)-5209284128.08)) + 
         (long long)p_4 * p_15) % (long long)(v_19 + 565UL);
  }
  if (- (18446744073709509304ULL % (unsigned long long)(v + 488LL)) + (unsigned long long)(~ v_7) < (unsigned long long)(- (- (- p_9)))) 
    result = (short)((long)p);
  else result = (short)p_4;
  return result;
}


