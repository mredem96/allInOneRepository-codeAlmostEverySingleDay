function res = nestedloop_function(numLoops,remainingParams)
    res = rec_function(numLoops,[],remainingParams);
end

function res = rec_function(numLoops, loopVars, remainingParams)
    if numLoops == 0
        res = whatever(loopVars, remainingParams);
        return res;
    end

    for k = 1:[any]
        loopVars = [loopVars,k];
        res = rec_function(numLoops-1, loopVars, remainingParams);
    end
end