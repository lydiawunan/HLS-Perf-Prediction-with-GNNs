//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 327853
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned short p_5, long long p_7, 
                   int p_9, float p_15)
{
  long long v_19;
  unsigned long v_17;
  signed char v_13;
  long long v_11;
  unsigned long v;
  unsigned short result;
  v_19 = (long long)p_15;
  v_17 = (unsigned long)p;
  v_13 = (signed char)-73;
  v_11 = (long long)p_15;
  result = (unsigned short)p_15;
  v_17 <<= (int)result & 31;
  result = (unsigned short)((v_11 * (long long)((int)v_13 + (int)((signed char)(- p_15)))) % (
                            (p_7 - (long long)(v_17 + 3809996500UL) / (
                                   ~ v_19 + 947LL)) + 282LL));
  v = (unsigned long)(~ p_9);
  result = (unsigned short)((long long)(((int)p * (int)result + ((int)result ^ (int)result)) / 431) ^ 
                            (long long)(! v / (unsigned long)((int)result + 69)) / (
                            ((long long)((long)p / -60837L) + ((long long)p_5 + p_7)) + 435LL));
  return result;
}


