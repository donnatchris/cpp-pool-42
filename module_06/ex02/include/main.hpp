/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <chdonnat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:22:42 by christophed       #+#    #+#             */
/*   Updated: 2025/05/20 09:43:22 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <iostream>
# include <ctime>
# include "../include/Base.hpp"
# include "../include/A.hpp"
# include "../include/B.hpp"
# include "../include/C.hpp"

Base* generate(void);
void identify(Base *p);
void identify(Base & p);

#endif