//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 438689891
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, long long p_5, unsigned long p_7, short p_9,
        double p_13)
{
  long v_19;
  short v_17;
  int v_15;
  unsigned long long v_11;
  char v;
  int result;
  v_19 = 48597L;
  v_17 = p_9;
  v_15 = 546056826;
  v = (char)(- ((double)(v_15 + (int)v_17) * ((double)p - -493.066818554)) - (double)v_19);
  v_11 = (unsigned long long)(p_5 % (long long)(! ((int)v + (int)((char)-5134777627.35)) + 856) - 290LL);
  v = (char)((unsigned long long)(~ p_9) - ((v_11 - (unsigned long long)p_13) / (unsigned long long)(
                                            ! p_7 + 301UL) + (unsigned long long)(- (- p))));
  result = (int)((long long)p + ((long long)((unsigned int)v - 57849U) / (
                                 p_5 % -20012LL + 329LL)) % ((! p_5 | (long long)p_7) + 949LL));
  return result;
}


