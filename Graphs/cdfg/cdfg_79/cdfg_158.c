#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 437465712
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned long p_9, unsigned long p_11, short p_13[5])
{
  unsigned long v_21;
  long v_19;
  unsigned int v_17;
  unsigned int v_15;
  unsigned int v_6;
  long v_4;
  unsigned char v;
  unsigned char result;
  v_21 = 3962565521UL;
  v_19 = 32927L;
  v_17 = 18313U;
  v_15 = (unsigned int)p_11;
  v_6 = 3719255338U;
  v_4 = (long)p_13[3];
  v = (unsigned char)p_9;
  while (~ ((long long)v_15 % -43697LL) >= (long long)(46U * v_17)) {
    result = v_21 % (unsigned long)((v_19 - 40L) + 110L);
    v_4 = (long)v_17;
    v_21 = p_11 - (unsigned long)(- v_6);
    v_17 = (unsigned int)(4294945056UL + (unsigned long)(v_15 * (unsigned int)result) * - p_9);
  }
  while_0_break: ;
  if (~ (((int)v - -26) / 17380) == -25948) {
    v = (unsigned char)(((unsigned long long)p_9 % (((unsigned long long)v_6 - 18679ULL) + 48ULL)) % (unsigned long long)(
                        (p_11 + (unsigned long)((unsigned int)p_13[1] + 3927532821U)) + 130UL));
    v_6 = (unsigned int)p;
    result = (unsigned char)((((double)v - 1.4806752503e+38) - (double)v_4) / (
                             (double)(! (! v_6)) + 83.));
  }
  else result = (unsigned char)82;
  return result;
}


