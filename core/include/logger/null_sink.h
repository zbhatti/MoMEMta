/*
 *  MoMEMta: a modular implementation of the Matrix Element Method
 *  Copyright (C) 2016  Universite catholique de Louvain (UCL), Belgium
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// Heavily inspired by spdlog, Copyright(c) 2015 Gabi Melman

#pragma once

#include <logger/base_sink.h>
#include <logger/null_mutex.h>

#include <mutex>

namespace logger {

namespace sinks {

template <class Mutex>
class null_sink: public base_sink<Mutex> {
protected:
    void _sink_it(const details::log_msg&) override {
        // Empty
    }

    void flush() override {
        // Empty
    }
};

typedef null_sink<details::null_mutex> null_sink_st;
typedef null_sink<std::mutex> null_sink_mt;

}

}
