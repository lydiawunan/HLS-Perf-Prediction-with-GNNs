//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 909804605
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, short p_9, long long p_11)
{
  unsigned long v_7;
  long v_4;
  long long v;
  long result;
  v_4 = 920549505L;
  v_7 = (unsigned long)p_11;
  result = (long)(~ (59093UL % (unsigned long)(v_4 + 177L) - (v_7 - (unsigned long)p_9)) | (unsigned long)-3512156380.18);
  v = (long long)(~ ((long)((217 + (int)((unsigned char)p)) - (int)(56835. * p)) + 
                     (result & (long)p) / (result * (long)p + 669L)));
  result = (long)(v - (long long)((unsigned long)((long)-3980931072.f * ! v_4) | 690431023UL));
  return result;
}


