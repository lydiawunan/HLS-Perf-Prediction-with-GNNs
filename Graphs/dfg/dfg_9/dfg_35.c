//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 219911143
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, int p_5, int p_13[5])
{
  unsigned int v_15;
  unsigned short v_11;
  unsigned long long v_9;
  int v_7;
  unsigned short v;
  long long result;
  v_15 = 3638942381U;
  v_11 = (unsigned short)p;
  result = -17433LL;
  v_9 = 2869ULL;
  v_7 = (int)((v_9 | (unsigned long long)(- p_5 >> ((long long)v_11 % -31718LL & 31LL))) - (unsigned long long)(! (
              (unsigned int)(- p_13[1]) + (v_15 + (unsigned int)v_11))));
  v = (unsigned short)(- (((long long)(p_5 * p_5) - (result + (long long)v_7)) | (long long)(
                          (long)(! p_5) % ((-778973976L + (long)p) + 81L))));
  result = (long long)(- (! (17432ULL / (unsigned long long)(result + 755LL))) + (unsigned long long)(
                       (long long)(0 % ((int)p / ((int)v + 47) + 353)) - 461338LL));
  return result;
}


