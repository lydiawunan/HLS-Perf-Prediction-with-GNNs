#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 970194599
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, signed char p_4, unsigned char p_7,
                unsigned short p_11, short p_17)
{
  signed char v_23;
  long long v_21;
  long v_19;
  double v_15;
  long v_13;
  unsigned short v_9;
  unsigned int v;
  signed char result;
  v_23 = (signed char)-71;
  v_21 = 61199LL;
  v_9 = (unsigned short)45019;
  v_13 = (long)((((int)p_17 / ((int)p_4 + 479)) % (56068 % ((int)p_7 + 959) + 132)) / 947);
  if ((unsigned long long)(! p + (long)(1.14631950197e+38f * (float)p_4)) - 
      18446744073312535025ULL * (unsigned long long)((int)p_7 + (int)p_17) < (unsigned long long)(
      ! (! v_21) * (long long)((long)(50499 % ((int)v_23 + 13)) + p * (long)p_17))) {
    result = (signed char)(- ((long)(! v_9) % ((long)p_11 % (v_13 + 528L) + 24L)));
    v = (unsigned int)p_7;
    result = (signed char)((unsigned long)((p + (long)p_4) << ((int)result & 31)) * (unsigned long)v);
  }
  else {
    v_19 = (long)((double)v_21 + -2.87726014413e+38);
    v_15 = (double)((float)p_4 * 4114139648.f);
    result = (signed char)(v_15 + (double)((long)((int)p_17 / ((int)p_17 + 1008)) + v_19));
  }
  return result;
}


