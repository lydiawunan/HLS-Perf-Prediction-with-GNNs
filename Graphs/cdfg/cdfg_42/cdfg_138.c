#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 689343755
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned long long p_11,
                long long p_13, short p_15, unsigned short p_17)
{
  long long v_23;
  unsigned long v_21;
  int v_19;
  unsigned short v_8;
  double v_6;
  long long v_4;
  long long v;
  signed char result;
  v_21 = (unsigned long)p_11;
  v_19 = (int)p_13;
  v_8 = (unsigned short)p_11;
  result = (signed char)-109;
  if (! (p_11 % (p_11 + 562ULL)) / 4294952061ULL >= (unsigned long long)(
      ((unsigned long)(! p_15) | 57476UL % (v_21 + 312UL)) + 4202463812UL)) {
    v_8 = (unsigned short)((unsigned long long)((int)p_17 / 212577084) + p);
    result = (signed char)p_15;
    v_6 = (double)(p_11 * ! ((unsigned long long)p_13 / (p + 956ULL)));
  }
  else {
    v_21 = (unsigned long)(1030591629ULL % (((p_11 << 51ULL) & 4294967227ULL) + 111ULL));
    v_23 = (long long)((unsigned int)-269.863983154f * ((unsigned int)v_8 / 38462U));
    v_6 = (double)((unsigned long long)((long long)v_19 % ((long long)v_21 * v_23 + 228LL)) | 18446744073708429327ULL);
  }
  if ((unsigned long long)((int)v_8 | (int)(! v_8)) == ! (112ULL & (4283056725ULL | p))) 
    result = (signed char)-123;
  else {
    v_4 = (long long)(((double)result + -1.55036903692e+38) * v_6);
    v = 58163LL;
    result = (signed char)(((unsigned long long)v & 723988331ULL) / (unsigned long long)(
                           - v_4 + 1010LL) + 10846ULL);
  }
  return result;
}


