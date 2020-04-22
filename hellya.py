import factory3
import math
import random
import customer3


class factory3:
    _mean = 0
    _N = 0
    _clock = 0


    def getN(self):
        return self._N


    def create(self):


        nextarrival = random.uniform(0, 2*self._mean)
        custi = customer3.customer3()
        self._clock += nextarrival
        custi._tA = self._clock
        return custi


    def __init__(self, MINNUMCUST, MAXNUMCUST):


        self._N = random.randint(MINNUMCUST, MAXNUMCUST)
        self._mean = 8*60*60/self._N


class histogram3:


    _delaylist = []
    _minbin = 0
    _maxbin = 0
    _numbin = 0
    _interval = 0


    def update(self, tD):


        if (tD < self._minbin):
            self._delaylist[0] += 1
            return 0
        if (tD > self._maxbin):
            self._delaylist[self._numbin - 1] += 1
            return self._numbin - 1
        k = (tD - self._minbin)/self._interval
        bin1 = 1 + math.floor(k)
        self._delaylist[bin1] += 1
        return bin1


    def savehisto(self, filename):


        fout = open(filename, 'w')
        for j in range(self._numbin):
            fout.write(str(j)+', ' + str(self._minbin+j*self._interval) + ', '+ str(self._delaylist[j]) + '\n')
        fout.close()


    def __init__(self, minbin, maxbin, numbin):


        self._minbin = minbin
        self._maxbin = maxbin
        self._numbin = numbin
        self._interval = (maxbin - minbin)/(numbin-2)
        for i in range(numbin):
            self._delaylist.append(0)


## Script for running queueing simulation

fac = factory3()
cash = cashier3()
hist = histogram3()


N = fac.getN()
for i in range(N):
    custi = fac.create()
    cash.checkout(custi)
    (tA, tL) = custi.report()
    hist.update(tL - tA)


hist.save(fname)
